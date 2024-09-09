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
	 * Function QuestIcon_Outside.QuestIcon_Outside_C.PauseAnim
	 */
	struct UQuestIcon_Outside_C_PauseAnim_Params
	{	};

	/**
	 * Function QuestIcon_Outside.QuestIcon_Outside_C.PlayAnim
	 */
	struct UQuestIcon_Outside_C_PlayAnim_Params
	{
	public:
		float                                                      StartAtTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PlaybackSpeed;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestIcon_Outside.QuestIcon_Outside_C.SetQuestIconClosed
	 */
	struct UQuestIcon_Outside_C_SetQuestIconClosed_Params
	{	};

	/**
	 * Function QuestIcon_Outside.QuestIcon_Outside_C.SetQuestIcon
	 */
	struct UQuestIcon_Outside_C_SetQuestIcon_Params
	{
	public:
		int32_t                                                    QuestID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestIcon_Outside.QuestIcon_Outside_C.SetIconTexture
	 */
	struct UQuestIcon_Outside_C_SetIconTexture_Params
	{
	public:
		TMap<EQuestStatus, class UTexture2D*>                      TextureList;                                             // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EQuestStatus                                               Key;                                                     // 0x0050(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RZ2U[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function QuestIcon_Outside.QuestIcon_Outside_C.SetIconZOrder
	 */
	struct UQuestIcon_Outside_C_SetIconZOrder_Params
	{
	public:
		TMap<EQuestStatus, ESBMiniMapIconType>                     IconTypeList;                                            // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EQuestStatus                                               Status;                                                  // 0x0050(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestIcon_Outside.QuestIcon_Outside_C.Construct
	 */
	struct UQuestIcon_Outside_C_Construct_Params
	{	};

	/**
	 * Function QuestIcon_Outside.QuestIcon_Outside_C.ExecuteUbergraph_QuestIcon_Outside
	 */
	struct UQuestIcon_Outside_C_ExecuteUbergraph_QuestIcon_Outside_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
