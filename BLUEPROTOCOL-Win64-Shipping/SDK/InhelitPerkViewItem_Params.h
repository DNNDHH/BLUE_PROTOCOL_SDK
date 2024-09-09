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
	 * Function InhelitPerkViewItem.InhelitPerkViewItem_C.DisablePurge
	 */
	struct UInhelitPerkViewItem_C_DisablePurge_Params
	{	};

	/**
	 * Function InhelitPerkViewItem.InhelitPerkViewItem_C.DisableChange
	 */
	struct UInhelitPerkViewItem_C_DisableChange_Params
	{	};

	/**
	 * Function InhelitPerkViewItem.InhelitPerkViewItem_C.SetEmpty
	 */
	struct UInhelitPerkViewItem_C_SetEmpty_Params
	{	};

	/**
	 * Function InhelitPerkViewItem.InhelitPerkViewItem_C.SetPerkData
	 */
	struct UInhelitPerkViewItem_C_SetPerkData_Params
	{
	public:
		struct FSBStackBPerk                                       SBCharacterWeaponPerkData;                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function InhelitPerkViewItem.InhelitPerkViewItem_C.BndEvt__InhelitPerkViewItem_BtnPurge_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 */
	struct UInhelitPerkViewItem_C_BndEvt__InhelitPerkViewItem_BtnPurge_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function InhelitPerkViewItem.InhelitPerkViewItem_C.BndEvt__InhelitPerkViewItem_BtnChange_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 */
	struct UInhelitPerkViewItem_C_BndEvt__InhelitPerkViewItem_BtnChange_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function InhelitPerkViewItem.InhelitPerkViewItem_C.ExecuteUbergraph_InhelitPerkViewItem
	 */
	struct UInhelitPerkViewItem_C_ExecuteUbergraph_InhelitPerkViewItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InhelitPerkViewItem.InhelitPerkViewItem_C.SelectPurge__DelegateSignature
	 */
	struct UInhelitPerkViewItem_C_SelectPurge__DelegateSignature_Params
	{
	public:
		struct FSBStackBPerk                                       SelectPerk;                                              // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function InhelitPerkViewItem.InhelitPerkViewItem_C.SelectChange__DelegateSignature
	 */
	struct UInhelitPerkViewItem_C_SelectChange__DelegateSignature_Params
	{
	public:
		struct FSBStackBPerk                                       SelectData;                                              // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
