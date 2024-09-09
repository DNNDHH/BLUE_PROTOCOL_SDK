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
	 * Function IconQuest.IconQuest_C.OnSetInside
	 */
	struct UIconQuest_C_OnSetInside_Params
	{
	public:
		bool                                                       IsInSide;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C94C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IconQuest.IconQuest_C.Setup
	 */
	struct UIconQuest_C_Setup_Params
	{
	public:
		int32_t                                                    QuestIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IconQuest.IconQuest_C.UpdateStatus
	 */
	struct UIconQuest_C_UpdateStatus_Params
	{	};

	/**
	 * Function IconQuest.IconQuest_C.Construct
	 */
	struct UIconQuest_C_Construct_Params
	{	};

	/**
	 * Function IconQuest.IconQuest_C.Destruct
	 */
	struct UIconQuest_C_Destruct_Params
	{	};

	/**
	 * Function IconQuest.IconQuest_C.OnAdventurerRankDelegate_Event_1
	 */
	struct UIconQuest_C_OnAdventurerRankDelegate_Event_1_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IconQuest.IconQuest_C.Bind
	 */
	struct UIconQuest_C_Bind_Params
	{	};

	/**
	 * Function IconQuest.IconQuest_C.Unbind
	 */
	struct UIconQuest_C_Unbind_Params
	{	};

	/**
	 * Function IconQuest.IconQuest_C.ExecuteUbergraph_IconQuest
	 */
	struct UIconQuest_C_ExecuteUbergraph_IconQuest_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
