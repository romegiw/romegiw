// BlueprintGeneratedClass TBP_ContextualHelp_MasqueradeBroken.TBP_ContextualHelp_MasqueradeBroken_C
// Size: 0xd0 (Inherited: 0xc4)
struct UTBP_ContextualHelp_MasqueradeBroken_C : UTBP_ContextualHelpBase_C {
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	void OnPlayerSpawned(struct ATigerPlayer* InTigerPlayer); // Function TBP_ContextualHelp_MasqueradeBroken.TBP_ContextualHelp_MasqueradeBroken_C.OnPlayerSpawned // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnMasqueradeBroken(bool InIsMasqueradeBreached, enum class ETigerAIPlayerAction InPlayerAction); // Function TBP_ContextualHelp_MasqueradeBroken.TBP_ContextualHelp_MasqueradeBroken_C.OnMasqueradeBroken // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_ContextualHelp_MasqueradeBroken(int32_t EntryPoint); // Function TBP_ContextualHelp_MasqueradeBroken.TBP_ContextualHelp_MasqueradeBroken_C.ExecuteUbergraph_TBP_ContextualHelp_MasqueradeBroken // (Final|UbergraphFunction) // @ game+0x16c0340
};

