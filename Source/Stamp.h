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
#include "SampleItem.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class Stamp  : public juce::Component,
               public juce::ComboBox::Listener,
               public juce::Button::Listener
{
public:
    //==============================================================================
    Stamp ();
    ~Stamp() override;

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    bool goback = false;
    void clearSampleValues();
    bool allSpecsProvided();
    //[/UserMethods]

    void paint (juce::Graphics& g) override;
    void resized() override;
    void comboBoxChanged (juce::ComboBox* comboBoxThatHasChanged) override;
    void buttonClicked (juce::Button* buttonThatWasClicked) override;

    // Binary resources:
    static const char* uhmbrellaBack_png;
    static const int uhmbrellaBack_pngSize;
    static const char* placeholderimage_png;
    static const int placeholderimage_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //int padding = 20;
    //int longwidth = 90;
    //int longheight = 24;
    //juce::Rectangle<int> longbounds;
    //juce::Rectangle<int> smallbounds;
    juce::String valBPM;
    juce::String valSampleName;
    juce::String valCollectionName;
    juce::String valKey;
    juce::String valLicense;
    juce::String valDescription;
    juce::String valGenre;
    juce::String valInstrumentBox;
    juce::Image newCover;
    juce::File sampleFile;
    juce::OwnedArray<SampleItem> samples;


    bool keepImg = true;

    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<juce::TextEditor> collectionname;
    std::unique_ptr<juce::TextEditor> description;
    std::unique_ptr<juce::TextEditor> samplename;
    std::unique_ptr<juce::ComboBox> instrumentbox;
    std::unique_ptr<juce::ComboBox> genrebox;
    std::unique_ptr<juce::ComboBox> license;
    std::unique_ptr<juce::ImageButton> collectioncover;
    std::unique_ptr<juce::TextEditor> BPM;
    std::unique_ptr<juce::ComboBox> key;
    std::unique_ptr<juce::TextEditor> supplies;
    std::unique_ptr<juce::TextEditor> fees;
    std::unique_ptr<juce::TextButton> deploycollection;
    std::unique_ptr<juce::TextButton> addsample;
    std::unique_ptr<juce::ImageButton> backbutton;
    std::unique_ptr<juce::Viewport> summary;
    std::unique_ptr<juce::TextButton> choosesample;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Stamp)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

