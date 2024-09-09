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
	 * Function NpcBalloonWindow.NpcBalloonWindow_C.CheckDistanceLimit
	 */
	struct UNpcBalloonWindow_C_CheckDistanceLimit_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MVN8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function NpcBalloonWindow.NpcBalloonWindow_C.GetBasePosition
	 */
	struct UNpcBalloonWindow_C_GetBasePosition_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcBalloonWindow.NpcBalloonWindow_C.AdjustPosition
	 */
	struct UNpcBalloonWindow_C_AdjustPosition_Params
	{
	public:
		struct FVector2D                                           Position;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FBWJ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function NpcBalloonWindow.NpcBalloonWindow_C.Tick
	 */
	struct UNpcBalloonWindow_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcBalloonWindow.NpcBalloonWindow_C.Show
	 */
	struct UNpcBalloonWindow_C_Show_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class ACharacter*                                          AttachCharacter;                                         // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                AttachTransformName;                                     // 0x0020(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AutoCloseTime;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcBalloonWindow.NpcBalloonWindow_C.Hide
	 */
	struct UNpcBalloonWindow_C_Hide_Params
	{	};

	/**
	 * Function NpcBalloonWindow.NpcBalloonWindow_C.OnAnimationFinished
	 */
	struct UNpcBalloonWindow_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcBalloonWindow.NpcBalloonWindow_C.Construct
	 */
	struct UNpcBalloonWindow_C_Construct_Params
	{	};

	/**
	 * Function NpcBalloonWindow.NpcBalloonWindow_C.UIVisibleSettingChangeDelegate_Event_1
	 */
	struct UNpcBalloonWindow_C_UIVisibleSettingChangeDelegate_Event_1_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NpcBalloonWindow.NpcBalloonWindow_C.Destruct
	 */
	struct UNpcBalloonWindow_C_Destruct_Params
	{	};

	/**
	 * Function NpcBalloonWindow.NpcBalloonWindow_C.ExecuteUbergraph_NpcBalloonWindow
	 */
	struct UNpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcBalloonWindow.NpcBalloonWindow_C.OnRemove__DelegateSignature
	 */
	struct UNpcBalloonWindow_C_OnRemove__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
