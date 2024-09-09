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
	 * Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.IsSkipTableRegisted
	 */
	struct UOptionVFXVisibleSelector_C_IsSkipTableRegisted_Params
	{
	public:
		ESBBattleEffectVisibleCategory                             Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBBattleEffectVisibleType                                 Type;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsRegisted;                                              // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4DSE[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.PreConstruct
	 */
	struct UOptionVFXVisibleSelector_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.Construct
	 */
	struct UOptionVFXVisibleSelector_C_Construct_Params
	{	};

	/**
	 * Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.GenerateVFXItems
	 */
	struct UOptionVFXVisibleSelector_C_GenerateVFXItems_Params
	{	};

	/**
	 * Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.UpdateVisible
	 */
	struct UOptionVFXVisibleSelector_C_UpdateVisible_Params
	{
	public:
		ESBBattleEffectVisibleCategory                             Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBBattleEffectVisibleType                                 Type;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Vidsible;                                                // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.BndEvt__CB_AllVisible_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UOptionVFXVisibleSelector_C_BndEvt__CB_AllVisible_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.BndEvt__CB_CustomSetting_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UOptionVFXVisibleSelector_C_BndEvt__CB_CustomSetting_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.InitializeCheck
	 */
	struct UOptionVFXVisibleSelector_C_InitializeCheck_Params
	{	};

	/**
	 * Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.Destruct
	 */
	struct UOptionVFXVisibleSelector_C_Destruct_Params
	{	};

	/**
	 * Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.ExecuteUbergraph_OptionVFXVisibleSelector
	 */
	struct UOptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
