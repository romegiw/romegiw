// BlueprintGeneratedClass TBP_ContextualHelp_Shield_Break.TBP_ContextualHelp_Shield_Break_C
// Size: 0xd0 (Inherited: 0xc4)
struct UTBP_ContextualHelp_Shield_Break_C : UTBP_ContextualHelpBase_C {
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	void OnPlayerSpawned(struct ATigerPlayer* InTigerPlayer); // Function TBP_ContextualHelp_Shield_Break.TBP_ContextualHelp_Shield_Break_C.OnPlayerSpawned // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void CheckShieldInInventory(); // Function TBP_ContextualHelp_Shield_Break.TBP_ContextualHelp_Shield_Break_C.CheckShieldInInventory // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_ContextualHelp_Shield_Break(int32_t EntryPoint); // Function TBP_ContextualHelp_Shield_Break.TBP_ContextualHelp_Shield_Break_C.ExecuteUbergraph_TBP_ContextualHelp_Shield_Break // (Final|UbergraphFunction) // @ game+0x16c0340
};

