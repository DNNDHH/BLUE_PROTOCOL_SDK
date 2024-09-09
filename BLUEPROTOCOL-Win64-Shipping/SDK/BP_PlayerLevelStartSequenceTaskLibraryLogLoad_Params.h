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
	 * Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.UpdateDemoList
	 */
	struct UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList_Params
	{	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.Start
	 */
	struct UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_Start_Params
	{
	public:
		class USBPlayerLevelStartSequenceComponent*                Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.EnemyLogLoaded
	 */
	struct UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_EnemyLogLoaded_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.OnLoadAchivementDelegate_event
	 */
	struct UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_OnLoadAchivementDelegate_event_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H1CO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSBAchievementInfo>                          AchievementList;                                         // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.CustomEvent_1
	 */
	struct UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_CustomEvent_1_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HA73[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FName>                                        DemoList;                                                // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.OnLoadAchievementDataDelegate_Event
	 */
	struct UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_OnLoadAchievementDataDelegate_Event_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2AAF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.GetIdListCallback
	 */
	struct UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_GetIdListCallback_Params
	{
	public:
		bool                                                       WasSuccessful;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OZ1T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBLibraryPictureBookType                                  Type;                                                    // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad
	 */
	struct UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
