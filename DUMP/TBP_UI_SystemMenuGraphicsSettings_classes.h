// WidgetBlueprintGeneratedClass TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C
// Size: 0x425 (Inherited: 0x290)
struct UTBP_UI_SystemMenuGraphicsSettings_C : UTigerMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UTBP_UI_Carousel_C* AmbientOcclusionCarousel; // 0x298(0x08)
	struct UTBP_UI_Carousel_C* AntiAliasingCarousel; // 0x2a0(0x08)
	struct UTBP_UI_ConfirmMenu_C* ApplyPrompt; // 0x2a8(0x08)
	struct UTBP_UI_Carousel_C* BloomCarousel; // 0x2b0(0x08)
	struct UOverlay* BrightnessSetup; // 0x2b8(0x08)
	struct UButton* Button_261; // 0x2c0(0x08)
	struct UImage* ButtonOutline; // 0x2c8(0x08)
	struct UTBP_UI_Carousel_C* DisplayModeCarousel; // 0x2d0(0x08)
	struct UTBP_UI_CheckBox_C* DX12Box; // 0x2d8(0x08)
	struct UTBP_UI_CheckBox_C* DynamicResolutionBox; // 0x2e0(0x08)
	struct UTBP_UI_Carousel_C* FoliageCarousel; // 0x2e8(0x08)
	struct UTBP_UI_Carousel_C* FrameRateLimitCarousel; // 0x2f0(0x08)
	struct UTBP_UI_SliderWBox_C* GammaSlider; // 0x2f8(0x08)
	struct UTBP_UI_Carousel_C* LensFlareCarousel; // 0x300(0x08)
	struct UTBP_UI_Carousel_C* MaterialCarousel; // 0x308(0x08)
	struct UTBP_UI_Carousel_C* MotionBlurCarousel; // 0x310(0x08)
	struct UTBP_UI_Carousel_C* QualityPresetCarousel; // 0x318(0x08)
	struct UTBP_UI_Carousel_C* ResolutionCarousel; // 0x320(0x08)
	struct UTBP_UI_ConfirmMenu_C* RestartPrompt; // 0x328(0x08)
	struct UTBP_UI_ConfirmMenu_C* RevertPrompt; // 0x330(0x08)
	struct UImage* Screenshot; // 0x338(0x08)
	struct UTBP_UI_Carousel_C* ScreenSpaceReflectionCarousel; // 0x340(0x08)
	struct UTigerStyledRichTextBlock* Setup_Button_Text; // 0x348(0x08)
	struct UTBP_UI_Carousel_C* ShadowCarousel; // 0x350(0x08)
	struct UWidgetSwitcher* Switcher_Settings; // 0x358(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* TabButton1; // 0x360(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* TabButton2; // 0x368(0x08)
	struct UTBP_UI_Submenu_Header_C* TBP_UI_Submenu_Header; // 0x370(0x08)
	struct UTBP_UI_SystemBrightness_C* TBP_UI_SystemBrightness; // 0x378(0x08)
	struct UTBP_UI_CheckBox_C* TempMotionBlurBox; // 0x380(0x08)
	struct UTBP_UI_Carousel_C* TextureCarousel; // 0x388(0x08)
	struct UTBP_UI_Carousel_C* TextureFilteringCarousel; // 0x390(0x08)
	struct UTBP_UI_Carousel_C* ViewDistanceCarousel; // 0x398(0x08)
	struct UTBP_UI_Carousel_C* VisualEffectCarousel; // 0x3a0(0x08)
	struct UTBP_UI_Carousel_C* VolumetricFogCarousel; // 0x3a8(0x08)
	struct UTBP_UI_CheckBox_C* VsyncBox; // 0x3b0(0x08)
	struct UTBP_UI_SystemMenuItem_C* CurrentlySelectedSystemMenuItem; // 0x3b8(0x08)
	struct TArray<struct FIntPoint> AvailableResolutions; // 0x3c0(0x10)
	struct TArray<struct FText> SubmenuButtonNames; // 0x3d0(0x10)
	struct TArray<struct FText> QualityLevelLabels; // 0x3e0(0x10)
	struct TArray<struct FText> AntiAliasingLevelLabels; // 0x3f0(0x10)
	struct TArray<struct FText> AnisotropyLevelLabels; // 0x400(0x10)
	struct TArray<struct FText> FrameLimitLabels; // 0x410(0x10)
	float DefaultGamma; // 0x420(0x04)
	bool ShouldShowRestartPrompt; // 0x424(0x01)

	void ApplySettings(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.ApplySettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void InitGraphicsSettings(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.InitGraphicsSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void InitDisplaySettings(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.InitDisplaySettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void InitQualityOptions(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.InitQualityOptions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void SetQualityOptionLabels(struct UTBP_UI_Carousel_C* InOptionCarousel, int32_t InOptionCount, bool InUsesCustom, bool InUsesOff, bool InUsesLow); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.SetQualityOptionLabels // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void RefreshQualityOptions(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.RefreshQualityOptions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void SetSubmenuButtonNames(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.SetSubmenuButtonNames // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void DiscardUnappliedChanges(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.DiscardUnappliedChanges // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void RefreshResolutionOptions(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.RefreshResolutionOptions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void RefreshWindowModeOptions(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.RefreshWindowModeOptions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void OnOpen(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__ResolutionCarousel_K2Node_ComponentBoundEvent_1_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__ResolutionCarousel_K2Node_ComponentBoundEvent_1_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__DisplayModeCarousel_K2Node_ComponentBoundEvent_2_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__DisplayModeCarousel_K2Node_ComponentBoundEvent_2_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void Destruct(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void Construct(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__Resolution_TabButton_K2Node_ComponentBoundEvent_0_OnButtonPressed__DelegateSignature(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__Resolution_TabButton_K2Node_ComponentBoundEvent_0_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__Brightness_TabButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__Brightness_TabButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__Button_260_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__Button_260_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void OnBrightnessConfirm(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.OnBrightnessConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void OnClose(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.OnClose // (Event|Protected|BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__GammaSlider_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__GammaSlider_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_TestCheckBox1_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_TestCheckBox1_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_VisualEffectCarousel_K2Node_ComponentBoundEvent_8_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_VisualEffectCarousel_K2Node_ComponentBoundEvent_8_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_ViewDistanceCarousel_K2Node_ComponentBoundEvent_9_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_ViewDistanceCarousel_K2Node_ComponentBoundEvent_9_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_MaterialCarousel_K2Node_ComponentBoundEvent_10_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_MaterialCarousel_K2Node_ComponentBoundEvent_10_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_ShadowCarousel_K2Node_ComponentBoundEvent_11_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_ShadowCarousel_K2Node_ComponentBoundEvent_11_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_QualityPresetCarousel_K2Node_ComponentBoundEvent_12_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_QualityPresetCarousel_K2Node_ComponentBoundEvent_12_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_TextureFilteringCarousel_K2Node_ComponentBoundEvent_13_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_TextureFilteringCarousel_K2Node_ComponentBoundEvent_13_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_AntiAliasingCarousel_K2Node_ComponentBoundEvent_14_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_AntiAliasingCarousel_K2Node_ComponentBoundEvent_14_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_TextureCarousel_K2Node_ComponentBoundEvent_15_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_TextureCarousel_K2Node_ComponentBoundEvent_15_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_FoliageCarousel_K2Node_ComponentBoundEvent_16_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FoliageCarousel_K2Node_ComponentBoundEvent_16_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_VolumetricFogCarousel_K2Node_ComponentBoundEvent_17_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_VolumetricFogCarousel_K2Node_ComponentBoundEvent_17_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_VsyncBox_K2Node_ComponentBoundEvent_18_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_VsyncBox_K2Node_ComponentBoundEvent_18_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void OnQualityOptionChanged(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.OnQualityOptionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_DynamicResolutionBox_K2Node_ComponentBoundEvent_19_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_DynamicResolutionBox_K2Node_ComponentBoundEvent_19_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_FrameLimitCarousel_K2Node_ComponentBoundEvent_20_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FrameLimitCarousel_K2Node_ComponentBoundEvent_20_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_TempMotionBlurBox_K2Node_ComponentBoundEvent_21_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_TempMotionBlurBox_K2Node_ComponentBoundEvent_21_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_RevertPrompt_K2Node_ComponentBoundEvent_3_CountdownFinished__DelegateSignature(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_RevertPrompt_K2Node_ComponentBoundEvent_3_CountdownFinished__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void ConfirmApply(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.ConfirmApply // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_RevertPrompt_K2Node_ComponentBoundEvent_22_Confirm__DelegateSignature(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_RevertPrompt_K2Node_ComponentBoundEvent_22_Confirm__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_RevertPrompt_K2Node_ComponentBoundEvent_23_Decline__DelegateSignature(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_RevertPrompt_K2Node_ComponentBoundEvent_23_Decline__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void ExecuteUbergraph_TBP_UI_SystemMenuGraphicsSettings(int32_t EntryPoint); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.ExecuteUbergraph_TBP_UI_SystemMenuGraphicsSettings // (Final|UbergraphFunction|HasDefaults) // @ game+0x16a87a0
};

