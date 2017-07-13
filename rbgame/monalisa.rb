require "chingu"

include Gosu
include Chingu

class MonaLisa < Chingu::Window
  def initialize
    super(600, 550, false)
    self.input = {:esc => :exit}
    push_game_state(Paint)
  end
end

class Pix < Chingu::GameObject
  traits :velocity
  def initialize(options)
    super(options)
  end

  def drop
    if rand(2) == 0
      @velocity_x = rand(0..2)
    else
      @velocity_x = -rand(0..2)
    end
    @velocity_y = rand(0..3)
    @acceleration_y = 1
  end

  def setup
    @image = Image["rect.png"]
  end
end

class Paint < Chingu::GameState

  def initialize
    @ground_y = $window.height+20
    super
  end

  def setup
    super
    IO.readlines("media/ml").each do |line|
      arr = line.chomp.split("x")
      x = arr[0].to_i
      y = arr[1].to_i
      w = arr[2].to_i
      h = arr[3].to_i
      r = arr[4][0...2].to_i(16)
      g = arr[4][2...4].to_i(16)
      b = arr[4][4...6].to_i(16)
      pix = Pix.create(:x => x, :y => y, :width => w, :height=> h, :color => Color.argb(255, r, g, b))
    end
    self.input = { :space => :drop }
  end

  def drop
    Pix.each { |pix| pix.drop }
  end

  def update
    Pix.each do |p|
      if p.y >= @ground_y
        slower = p.velocity_y / 3
        p.velocity_y = -(slower + rand(slower))
        if rand(2) == 0
          p.velocity_x = rand(0.4)
          p.acceleration_x = -(rand(0.05))
        else
          p.velocity_x = -rand(0.4)
          p.acceleration_x = (rand(0.05))
        end
      end
    end
    super
  end
end

MonaLisa.new.show
#该片段来自于http://outofmemory.cn
