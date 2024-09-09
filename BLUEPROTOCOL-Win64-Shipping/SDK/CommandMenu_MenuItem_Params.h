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
	 * Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.UpdateMailRestrictions
	 */
	struct UCommandMenu_MenuItem_C_UpdateMailRestrictions_Params
	{
	public:
		bool                                                       Aleat;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Warning;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ENQZ[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.IsActiveExcramation
	 */
	struct UCommandMenu_MenuItem_C_IsActiveExcramation_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.SetBtn
	 */
	struct UCommandMenu_MenuItem_C_SetBtn_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.SetBtnTextColor
	 */
	struct UCommandMenu_MenuItem_C_SetBtnTextColor_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O425[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.GetMenuType
	 */
	struct UCommandMenu_MenuItem_C_GetMenuType_Params
	{
	public:
		ESBCommandMenuType                                         MenuType;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.Play Btn Anim
	 */
	struct UCommandMenu_MenuItem_C_PlayBtnAnim_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCommandMenu_MenuItem_C_BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_76_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCommandMenu_MenuItem_C_BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_76_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_97_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCommandMenu_MenuItem_C_BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_97_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.PreConstruct
	 */
	struct UCommandMenu_MenuItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.ShowExcramation
	 */
	struct UCommandMenu_MenuItem_C_ShowExcramation_Params
	{
	public:
		bool                                                       bIsShow;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.ExecuteUbergraph_CommandMenu_MenuItem
	 */
	struct UCommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.OnSelect__DelegateSignature
	 */
	struct UCommandMenu_MenuItem_C_OnSelect__DelegateSignature_Params
	{
	public:
		class UCommandMenu_MenuItem_C*                             Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
