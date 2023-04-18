/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"
#include "../../Uhmplugin/Source/MainMenuh.h"
#include "Stamp.h"


//==============================================================================
/**
*/
class UhmpluginAudioProcessorEditor : public juce::AudioProcessorEditor
{
public:
    UhmpluginAudioProcessorEditor (UhmpluginAudioProcessor&);
    ~UhmpluginAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.

    MainMenuh mainmenu;
    Stamp stampmenu;
    UhmpluginAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (UhmpluginAudioProcessorEditor)
};
