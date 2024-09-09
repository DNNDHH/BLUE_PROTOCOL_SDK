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
	 * Function InheritButtonView.InheritButtonView_C.SetTextMaxColor
	 */
	struct UInheritButtonView_C_SetTextMaxColor_Params
	{
	public:
		class UTextBlock*                                          Text;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsMax;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InheritButtonView.InheritButtonView_C.SetData
	 */
	struct UInheritButtonView_C_SetData_Params
	{
	public:
		struct FOwnItemInfo                                        SpecialPerk;                                             // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<struct FSBStackBPerk>                               SelectPerks;                                             // 0x0150(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FOwnItemInfo                                        Target;                                                  // 0x0160(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<struct FOwnItemInfo>                                Materials;                                               // 0x02B0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FOwnItemInfo                                        SubAbilitiy;                                             // 0x02C0(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function InheritButtonView.InheritButtonView_C.Initialize
	 */
	struct UInheritButtonView_C_Initialize_Params
	{	};

	/**
	 * Function InheritButtonView.InheritButtonView_C.UpdateVitalPerkName
	 */
	struct UInheritButtonView_C_UpdateVitalPerkName_Params
	{	};

	/**
	 * Function InheritButtonView.InheritButtonView_C.UpdateSlot
	 */
	struct UInheritButtonView_C_UpdateSlot_Params
	{	};

	/**
	 * Function InheritButtonView.InheritButtonView_C.Construct
	 */
	struct UInheritButtonView_C_Construct_Params
	{	};

	/**
	 * Function InheritButtonView.InheritButtonView_C.BndEvt__InheritButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UInheritButtonView_C_BndEvt__InheritButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function InheritButtonView.InheritButtonView_C.ExecuteUbergraph_InheritButtonView
	 */
	struct UInheritButtonView_C_ExecuteUbergraph_InheritButtonView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InheritButtonView.InheritButtonView_C.SelectReselect__DelegateSignature
	 */
	struct UInheritButtonView_C_SelectReselect__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
