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
	 * Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.SetSkillDataAtPhotoMode
	 */
	struct UCharaCreateClassSkillMenuItem_C_SetSkillDataAtPhotoMode_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESkillActionPosition                                       InPosition;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.SetSkillNamePadding
	 */
	struct UCharaCreateClassSkillMenuItem_C_SetSkillNamePadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.SetPlayIconVisibility
	 */
	struct UCharaCreateClassSkillMenuItem_C_SetPlayIconVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.SetSelected
	 */
	struct UCharaCreateClassSkillMenuItem_C_SetSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.SetSkillNameText
	 */
	struct UCharaCreateClassSkillMenuItem_C_SetSkillNameText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.BndEvt__Btn_K2Node_ComponentBoundEvent_140_OnButtonPressedEvent__DelegateSignature
	 */
	struct UCharaCreateClassSkillMenuItem_C_BndEvt__Btn_K2Node_ComponentBoundEvent_140_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UCharaCreateClassSkillMenuItem_C_BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.Tick
	 */
	struct UCharaCreateClassSkillMenuItem_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.ExecuteUbergraph_CharaCreateClassSkillMenuItem
	 */
	struct UCharaCreateClassSkillMenuItem_C_ExecuteUbergraph_CharaCreateClassSkillMenuItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.OnReleased__DelegateSignature
	 */
	struct UCharaCreateClassSkillMenuItem_C_OnReleased__DelegateSignature_Params
	{
	public:
		class UCharaCreateClassSkillMenuItem_C*                    Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.OnPressed__DelegateSignature
	 */
	struct UCharaCreateClassSkillMenuItem_C_OnPressed__DelegateSignature_Params
	{
	public:
		class UCharaCreateClassSkillMenuItem_C*                    Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.OnSelected__DelegateSignature
	 */
	struct UCharaCreateClassSkillMenuItem_C_OnSelected__DelegateSignature_Params
	{
	public:
		class UCharaCreateClassSkillMenuItem_C*                    InSelectedItem;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
