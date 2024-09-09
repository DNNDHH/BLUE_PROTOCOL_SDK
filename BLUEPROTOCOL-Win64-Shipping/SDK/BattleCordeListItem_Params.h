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
	 * Function BattleCordeListItem.BattleCordeListItem_C.SetBattleScore
	 */
	struct UBattleCordeListItem_C_SetBattleScore_Params
	{
	public:
		int32_t                                                    InBattleScore;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BTUC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BattleCordeListItem.BattleCordeListItem_C.SetColorAndOpacityOfBattleScore
	 */
	struct UBattleCordeListItem_C_SetColorAndOpacityOfBattleScore_Params
	{
	public:
		struct FLinearColor                                        InColorAndOpacity;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeListItem.BattleCordeListItem_C.GetBtn
	 */
	struct UBattleCordeListItem_C_GetBtn_Params
	{
	public:
		class USBButton_C*                                         Btn01;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeListItem.BattleCordeListItem_C.GetClassIcon
	 */
	struct UBattleCordeListItem_C_GetClassIcon_Params
	{
	public:
		class UClassIcon_C*                                        ClassIcon;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeListItem.BattleCordeListItem_C.GetNameText
	 */
	struct UBattleCordeListItem_C_GetNameText_Params
	{
	public:
		class UTextBlock*                                          CordeNameTxt;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeListItem.BattleCordeListItem_C.SetWide
	 */
	struct UBattleCordeListItem_C_SetWide_Params
	{
	public:
		bool                                                       ToWide;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeListItem.BattleCordeListItem_C.GetCordeData
	 */
	struct UBattleCordeListItem_C_GetCordeData_Params
	{
	public:
		struct FSBPlayerPresetEquipList                            OutCordeData;                                            // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BattleCordeListItem.BattleCordeListItem_C.SetSelected
	 */
	struct UBattleCordeListItem_C_SetSelected_Params
	{
	public:
		bool                                                       InIsSelected;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZN7J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BattleCordeListItem.BattleCordeListItem_C.SetIsEnable
	 */
	struct UBattleCordeListItem_C_SetIsEnable_Params
	{
	public:
		bool                                                       InIsSelectable;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z7PW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BattleCordeListItem.BattleCordeListItem_C.Setup
	 */
	struct UBattleCordeListItem_C_Setup_Params
	{
	public:
		struct FSBPlayerPresetEquipList                            InCordeData;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BattleCordeListItem.BattleCordeListItem_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBattleCordeListItem_C_BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BattleCordeListItem.BattleCordeListItem_C.BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBattleCordeListItem_C_BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BattleCordeListItem.BattleCordeListItem_C.BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBattleCordeListItem_C_BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BattleCordeListItem.BattleCordeListItem_C.BndEvt__BattleCordeListItem_BtnWide_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBattleCordeListItem_C_BndEvt__BattleCordeListItem_BtnWide_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BattleCordeListItem.BattleCordeListItem_C.BndEvt__BattleCordeListItem_BtnWide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBattleCordeListItem_C_BndEvt__BattleCordeListItem_BtnWide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BattleCordeListItem.BattleCordeListItem_C.BndEvt__BattleCordeListItem_BtnWide_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBattleCordeListItem_C_BndEvt__BattleCordeListItem_BtnWide_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BattleCordeListItem.BattleCordeListItem_C.ExecuteUbergraph_BattleCordeListItem
	 */
	struct UBattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeListItem.BattleCordeListItem_C.OnClicked__DelegateSignature
	 */
	struct UBattleCordeListItem_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UBattleCordeListItem_C*                              InSelf;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
