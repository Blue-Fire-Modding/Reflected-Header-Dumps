// Class SoundUtilities.SoundSimple
// Size: 0x178 (Inherited: 0x160)
struct USoundSimple : USoundBase {
	TArray<FSoundVariation> Variations; // 0x160(0x10)
	USoundWave* SoundWave; // 0x170(0x08)
};

// Class SoundUtilities.SoundUtilitiesBPFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct USoundUtilitiesBPFunctionLibrary : UBlueprintFunctionLibrary {

	float GetPitchScaleFromMIDIPitch(int32_t BaseMidiNote, int32_t TargetMidiNote);
	int32_t GetMIDIPitchFromFrequency(float Frequency);
	float GetFrequencyFromMIDIPitch(int32_t MidiNote);
	float GetBeatTempo(float BeatsPerMinute, int32_t BeatMultiplier, int32_t DivisionsOfWholeNote);
};

