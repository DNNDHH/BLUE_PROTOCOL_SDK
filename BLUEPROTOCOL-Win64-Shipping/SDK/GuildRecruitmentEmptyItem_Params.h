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
	 * Function GuildRecruitmentEmptyItem.GuildRecruitmentEmptyItem_C.SetGuildTutorialMessage
	 */
	struct UGuildRecruitmentEmptyItem_C_SetGuildTutorialMessage_Params
	{	};

	/**
	 * Function GuildRecruitmentEmptyItem.GuildRecruitmentEmptyItem_C.SetMainMessageFromId
	 */
	struct UGuildRecruitmentEmptyItem_C_SetMainMessageFromId_Params
	{
	public:
		int32_t                                                    TextId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L2NZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GuildRecruitmentEmptyItem.GuildRecruitmentEmptyItem_C.Construct
	 */
	struct UGuildRecruitmentEmptyItem_C_Construct_Params
	{	};

	/**
	 * Function GuildRecruitmentEmptyItem.GuildRecruitmentEmptyItem_C.ExecuteUbergraph_GuildRecruitmentEmptyItem
	 */
	struct UGuildRecruitmentEmptyItem_C_ExecuteUbergraph_GuildRecruitmentEmptyItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
