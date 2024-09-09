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
	 * Function DebugList.DebugList_C.GetQuestStatusString
	 */
	struct UDebugList_C_GetQuestStatusString_Params
	{
	public:
		EQuestStatus                                               InStatus;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_516Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Output;                                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugList.DebugList_C.MakePlayerLocationtList
	 */
	struct UDebugList_C_MakePlayerLocationtList_Params
	{	};

	/**
	 * Function DebugList.DebugList_C.MakeAcceptedQuestList
	 */
	struct UDebugList_C_MakeAcceptedQuestList_Params
	{	};

	/**
	 * Function DebugList.DebugList_C.SetInitialValue
	 */
	struct UDebugList_C_SetInitialValue_Params
	{
	public:
		TArray<class FString>                                      InitialValue;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function DebugList.DebugList_C.Construct
	 */
	struct UDebugList_C_Construct_Params
	{	};

	/**
	 * Function DebugList.DebugList_C.Tick
	 */
	struct UDebugList_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugList.DebugList_C.HandleOnExecutedConsoleCommand
	 */
	struct UDebugList_C_HandleOnExecutedConsoleCommand_Params
	{	};

	/**
	 * Function DebugList.DebugList_C.BindDebugButtonOnClicked
	 */
	struct UDebugList_C_BindDebugButtonOnClicked_Params
	{
	public:
		class UDebugButton_C*                                      DebugButton;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugList.DebugList_C.EventDispatcher_OnClicked_イベント_1
	 */
	struct UDebugList_C_EventDispatcher_OnClicked__1_Params
	{
	public:
		class UDebugButton_C*                                      DebugButton;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugList.DebugList_C.OnClicked_イベント_1
	 */
	struct UDebugList_C_OnClicked__1_Params
	{	};

	/**
	 * Function DebugList.DebugList_C.ExecuteUbergraph_DebugList
	 */
	struct UDebugList_C_ExecuteUbergraph_DebugList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
