/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 7.0.5

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2020 - Raw Material Software Limited.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include <JuceHeader.h>

//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class MainMenuh  : public juce::Component,
                   public juce::Button::Listener
{
public:
    //==============================================================================
    MainMenuh ();
    ~MainMenuh() override;

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    bool showstampmenu = false;
    //[/UserMethods]

    void paint (juce::Graphics& g) override;
    void resized() override;
    void buttonClicked (juce::Button* buttonThatWasClicked) override;

    // Binary resources:
    static const char* uhmbrellaLogo_png;
    static const int uhmbrellaLogo_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    juce::URL mintURL;
    juce::URL collectionURL;
    int buttonwidth = 112;
    int buttonheight = 32;
    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<juce::TextButton> stampbutton;
    std::unique_ptr<juce::TextButton> browsebut;
    juce::Image cachedImage_uhmbrellaLogo_png_1;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainMenuh)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

