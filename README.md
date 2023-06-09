## :bone: Introduction
__OpenGPT is a free and open source project that uses the openai API to work. Version [0.0.4]__.

__:ballot_box_with_check: Advantages:__
- Modern ui.
- Performance thanks to c++.  
- Long maintainability.  
- Open source.

## __:framed_picture: Screenshots:__

<img src="./readme/version0.0.4.jpg" width=350px height=350px></img>

## __:smoking: Dependencies:__
- qt
- sqlite

## __:file_folder: Installing:__
- for arch linux users install with aur (yay):<br>
`yay -Scc && yay -Sy && yay -S --devel open-gpt-bin`<br>
- For users of other distributions, you can install with the command:<br>
`if [ -f open-gpt.tar.gz ]; then rm open-gpt.tar.gz; fi && curl -L https://downloads.sourceforge.net/sourceforge/open-gpt/open-gpt.tar.gz -o open-gpt.tar.gz && tar -zxvf open-gpt.tar.gz && chmod +x OpenGPT && ./OpenGPT`

## __:dart: Usage:__
After launching the application, click the `sign on` button, and in the field enter the token received on `https://platform.openai.com/account/api-keys`. Then you can make a request!

## __:vulcan_salute: Todo:__
- ~~Registration~~
- Improve ui
- Theme toggle
- Settings
