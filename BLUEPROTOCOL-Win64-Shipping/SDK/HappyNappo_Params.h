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
	 * Function HappyNappo.HappyNappo_C.GetDiscoverdCurrentMapCount
	 */
	struct UHappyNappo_C_GetDiscoverdCurrentMapCount_Params
	{
	public:
		TArray<class FString>                                      IDs;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FSBHappyNappo>                               CurrenMapMasterData;                                     // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    DiscoverdCount;                                          // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HappyNappo.HappyNappo_C.Init
	 */
	struct UHappyNappo_C_Init_Params
	{
	public:
		class FString                                              DiscoveredNappoId;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    RetCode;                                                 // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A0IV[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      nappo_ids;                                               // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       IsNew;                                                   // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0P3T[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HappyNappo.HappyNappo_C.GetCurrentMapNappoMaster
	 */
	struct UHappyNappo_C_GetCurrentMapNappoMaster_Params
	{
	public:
		TArray<struct FSBHappyNappo>                               CurrentMapMasterData;                                    // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function HappyNappo.HappyNappo_C.InteractHappyNappo
	 */
	struct UHappyNappo_C_InteractHappyNappo_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U7HI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      NappoIds;                                                // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function HappyNappo.HappyNappo_C.CloseAndCheckCompleteEvent
	 */
	struct UHappyNappo_C_CloseAndCheckCompleteEvent_Params
	{	};

	/**
	 * Function HappyNappo.HappyNappo_C.ShowComplete
	 */
	struct UHappyNappo_C_ShowComplete_Params
	{	};

	/**
	 * Function HappyNappo.HappyNappo_C.InOutAnimEnd
	 */
	struct UHappyNappo_C_InOutAnimEnd_Params
	{	};

	/**
	 * Function HappyNappo.HappyNappo_C.InteractAnimStart
	 */
	struct UHappyNappo_C_InteractAnimStart_Params
	{	};

	/**
	 * Function HappyNappo.HappyNappo_C.Construct
	 */
	struct UHappyNappo_C_Construct_Params
	{	};

	/**
	 * Function HappyNappo.HappyNappo_C.ReRequestSuccess
	 */
	struct UHappyNappo_C_ReRequestSuccess_Params
	{	};

	/**
	 * Function HappyNappo.HappyNappo_C.ExecuteUbergraph_HappyNappo
	 */
	struct UHappyNappo_C_ExecuteUbergraph_HappyNappo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DC0F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HappyNappo.HappyNappo_C.End__DelegateSignature
	 */
	struct UHappyNappo_C_End__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
