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
	 * Function OpenCommandMenu.OpenCommandMenu_C.UpdateKeyText
	 */
	struct UOpenCommandMenu_C_UpdateKeyText_Params
	{	};

	/**
	 * Function OpenCommandMenu.OpenCommandMenu_C.UpdateVisibility
	 */
	struct UOpenCommandMenu_C_UpdateVisibility_Params
	{	};

	/**
	 * Function OpenCommandMenu.OpenCommandMenu_C.OnAnimationFinished
	 */
	struct UOpenCommandMenu_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OpenCommandMenu.OpenCommandMenu_C.OnChangeOpenCommandMenuFlag
	 */
	struct UOpenCommandMenu_C_OnChangeOpenCommandMenuFlag_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OpenCommandMenu.OpenCommandMenu_C.OnUpdateKeyEvent
	 */
	struct UOpenCommandMenu_C_OnUpdateKeyEvent_Params
	{	};

	/**
	 * Function OpenCommandMenu.OpenCommandMenu_C.Destruct
	 */
	struct UOpenCommandMenu_C_Destruct_Params
	{	};

	/**
	 * Function OpenCommandMenu.OpenCommandMenu_C.Construct
	 */
	struct UOpenCommandMenu_C_Construct_Params
	{	};

	/**
	 * Function OpenCommandMenu.OpenCommandMenu_C.UIVisibleSettingChangeDelegate_Event_1
	 */
	struct UOpenCommandMenu_C_UIVisibleSettingChangeDelegate_Event_1_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OpenCommandMenu.OpenCommandMenu_C.OnPhotoMode Enter
	 */
	struct UOpenCommandMenu_C_OnPhotoModeEnter_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OpenCommandMenu.OpenCommandMenu_C.OnPhotoMode Leave
	 */
	struct UOpenCommandMenu_C_OnPhotoModeLeave_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OpenCommandMenu.OpenCommandMenu_C.ExecuteUbergraph_OpenCommandMenu
	 */
	struct UOpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
