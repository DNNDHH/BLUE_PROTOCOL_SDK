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
	 * Function PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C.SetSlotDeficiency
	 */
	struct UPlugSetMenuPartSlotButton_C_SetSlotDeficiency_Params
	{
	public:
		bool                                                       bDeficiency;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C.GetData
	 */
	struct UPlugSetMenuPartSlotButton_C_GetData_Params
	{
	public:
		struct FSBCharacterWeaponPerkData                          Data;                                                    // 0x0000(0x001C)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C.SetSelected
	 */
	struct UPlugSetMenuPartSlotButton_C_SetSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C.SetData
	 */
	struct UPlugSetMenuPartSlotButton_C_SetData_Params
	{
	public:
		struct FSBCharacterWeaponPerkData                          SBCharacterWeaponPerkData;                               // 0x0000(0x001C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C.BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPlugSetMenuPartSlotButton_C_BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C.BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UPlugSetMenuPartSlotButton_C_BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C.BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UPlugSetMenuPartSlotButton_C_BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C.ExecuteUbergraph_PlugSetMenuPartSlotButton
	 */
	struct UPlugSetMenuPartSlotButton_C_ExecuteUbergraph_PlugSetMenuPartSlotButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C.OnSelectedItem__DelegateSignature
	 */
	struct UPlugSetMenuPartSlotButton_C_OnSelectedItem__DelegateSignature_Params
	{
	public:
		class UPlugSetMenuPartSlotButton_C*                        SelectedButton;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
