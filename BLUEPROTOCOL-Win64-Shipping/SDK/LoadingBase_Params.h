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
	 * Function LoadingBase.LoadingBase_C.AddLoadingTipsCandidateList
	 */
	struct ULoadingBase_C_AddLoadingTipsCandidateList_Params
	{
	public:
		int32_t                                                    InListIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InId;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LoadingBase.LoadingBase_C.UpdateCandidateTipsList
	 */
	struct ULoadingBase_C_UpdateCandidateTipsList_Params
	{
	public:
		int32_t                                                    totalCount;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ITKE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LoadingBase.LoadingBase_C.SetTipsText
	 */
	struct ULoadingBase_C_SetTipsText_Params
	{
	public:
		int32_t                                                    TipsId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CMYK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LoadingBase.LoadingBase_C.CheckProgressMission
	 */
	struct ULoadingBase_C_CheckProgressMission_Params
	{
	public:
		class FName                                                MissionId;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NDFX[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LoadingBase.LoadingBase_C.CheckProgressQuest
	 */
	struct ULoadingBase_C_CheckProgressQuest_Params
	{
	public:
		EProgressType                                              ProgressType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CIT1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ProgressQuestId;                                         // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ProgressStep;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LoadingBase.LoadingBase_C.CheckMapId
	 */
	struct ULoadingBase_C_CheckMapId_Params
	{
	public:
		class FName                                                MapCategory;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LoadingBase.LoadingBase_C.UpdateAspectRate
	 */
	struct ULoadingBase_C_UpdateAspectRate_Params
	{	};

	/**
	 * Function LoadingBase.LoadingBase_C.SetUpRule
	 */
	struct ULoadingBase_C_SetUpRule_Params
	{	};

	/**
	 * Function LoadingBase.LoadingBase_C.Construct
	 */
	struct ULoadingBase_C_Construct_Params
	{	};

	/**
	 * Function LoadingBase.LoadingBase_C.Tick
	 */
	struct ULoadingBase_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LoadingBase.LoadingBase_C.Show
	 */
	struct ULoadingBase_C_Show_Params
	{	};

	/**
	 * Function LoadingBase.LoadingBase_C.ChangeTips
	 */
	struct ULoadingBase_C_ChangeTips_Params
	{	};

	/**
	 * Function LoadingBase.LoadingBase_C.CheckLogOutput
	 */
	struct ULoadingBase_C_CheckLogOutput_Params
	{	};

	/**
	 * Function LoadingBase.LoadingBase_C.ExecuteUbergraph_LoadingBase
	 */
	struct ULoadingBase_C_ExecuteUbergraph_LoadingBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HGG7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
