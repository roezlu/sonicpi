# Challenge C
use_bpm 160

#change the sound of your notes by using a synthesizer
use_synth :saw

define :notesandfx do |fxchoice|
  with_fx fxchoice do
    play :c2
    sleep 0.5
    play :e2
    sleep 0.5
    play :g2
    sleep 0.5
    play :b2
    sleep 0.5
    
    play :c3
    sleep 0.5
    play :b2
    sleep 0.5
    play :g2
    sleep 0.5
    play :e2
    sleep 0.5
  end
end


notesandfx :none
notesandfx :echo
notesandfx :octaver
notesandfx :flanger
notesandfx :bitcrusher



# sustain just means hold the note longer!
play :c2, sustain: 3
play :e2, sustain: 4
play :g2, sustain: 2
play :b2, sustain: 2

