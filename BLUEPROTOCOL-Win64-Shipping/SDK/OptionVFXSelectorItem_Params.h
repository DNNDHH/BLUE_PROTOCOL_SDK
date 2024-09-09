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
	 * Function OptionVFXSelectorItem.OptionVFXSelectorItem_C.BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UOptionVFXSelectorItem_C_BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionVFXSelectorItem.OptionVFXSelectorItem_C.OnChange
	 */
	struct UOptionVFXSelectorItem_C_OnChange_Params
	{
	public:
		ESBBattleEffectVisibleCategory                             Category;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBBattleEffectVisibleType                                 Type;                                                    // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Visible;                                                 // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionVFXSelectorItem.OptionVFXSelectorItem_C.OnCustomMode Change
	 */
	struct UOptionVFXSelectorItem_C_OnCustomModeChange_Params
	{
	public:
		bool                                                       bCustom;                                                 // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionVFXSelectorItem.OptionVFXSelectorItem_C.PreConstruct
	 */
	struct UOptionVFXSelectorItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionVFXSelectorItem.OptionVFXSelectorItem_C.Initialize
	 */
	struct UOptionVFXSelectorItem_C_Initialize_Params
	{	};

	/**
	 * Function OptionVFXSelectorItem.OptionVFXSelectorItem_C.Construct
	 */
	struct UOptionVFXSelectorItem_C_Construct_Params
	{	};

	/**
	 * Function OptionVFXSelectorItem.OptionVFXSelectorItem_C.ExecuteUbergraph_OptionVFXSelectorItem
	 */
	struct UOptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_06N8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OptionVFXSelectorItem.OptionVFXSelectorItem_C.UpdateVisible__DelegateSignature
	 */
	struct UOptionVFXSelectorItem_C_UpdateVisible__DelegateSignature_Params
	{
	public:
		ESBBattleEffectVisibleCategory                             Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBBattleEffectVisibleType                                 Type;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Vidsible;                                                // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
