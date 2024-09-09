#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function InhelitPerkView.InhelitPerkView_C.DisableAllPurgeBtn
	 */
	struct UInhelitPerkView_C_DisableAllPurgeBtn_Params
	{
	public:
		bool                                                       DisablePurgeBtn;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InhelitPerkView.InhelitPerkView_C.DisableAllChangeBtn
	 */
	struct UInhelitPerkView_C_DisableAllChangeBtn_Params
	{
	public:
		bool                                                       bDisableChangeBtn;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InhelitPerkView.InhelitPerkView_C.InhelitPerkView_AutoGenFunc
	 */
	struct UInhelitPerkView_C_InhelitPerkView_AutoGenFunc_Params
	{
	public:
		struct FSBStackBPerk                                       SelectPerk;                                              // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function InhelitPerkView.InhelitPerkView_C.SetBaseWeapon
	 */
	struct UInhelitPerkView_C_SetBaseWeapon_Params
	{
	public:
		struct FOwnItemInfo                                        BaseWeapon;                                              // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function InhelitPerkView.InhelitPerkView_C.SetPerkB
	 */
	struct UInhelitPerkView_C_SetPerkB_Params
	{
	public:
		TArray<struct FSBStackBPerk>                               Perkb;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function InhelitPerkView.InhelitPerkView_C.Initialize
	 */
	struct UInhelitPerkView_C_Initialize_Params
	{	};

	/**
	 * Function InhelitPerkView.InhelitPerkView_C.GenerateView
	 */
	struct UInhelitPerkView_C_GenerateView_Params
	{	};

	/**
	 * Function InhelitPerkView.InhelitPerkView_C.PreConstruct
	 */
	struct UInhelitPerkView_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InhelitPerkView.InhelitPerkView_C.InhelitPerkView ChangePerk
	 */
	struct UInhelitPerkView_C_InhelitPerkViewChangePerk_Params
	{
	public:
		struct FSBStackBPerk                                       SelectData;                                              // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function InhelitPerkView.InhelitPerkView_C.ExecuteUbergraph_InhelitPerkView
	 */
	struct UInhelitPerkView_C_ExecuteUbergraph_InhelitPerkView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XICQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function InhelitPerkView.InhelitPerkView_C.PurgeRequest__DelegateSignature
	 */
	struct UInhelitPerkView_C_PurgeRequest__DelegateSignature_Params
	{
	public:
		struct FSBStackBPerk                                       PurgeTarget;                                             // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function InhelitPerkView.InhelitPerkView_C.ChangePerkRequest__DelegateSignature
	 */
	struct UInhelitPerkView_C_ChangePerkRequest__DelegateSignature_Params
	{
	public:
		struct FSBStackBPerk                                       ChangeTarget;                                            // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
