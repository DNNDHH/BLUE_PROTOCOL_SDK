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
	 * Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.OnChangeWeaponVisibility
	 */
	struct UBP_SBPhotoModePlayerControlData_C_OnChangeWeaponVisibility_Params
	{	};

	/**
	 * Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.CreateCloneCharacter
	 */
	struct UBP_SBPhotoModePlayerControlData_C_CreateCloneCharacter_Params
	{
	public:
		class UObject*                                             InParent;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInCopyPose;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IOGF[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.SetPlayerHidden
	 */
	struct UBP_SBPhotoModePlayerControlData_C_SetPlayerHidden_Params
	{
	public:
		bool                                                       bIsHidden;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B7NJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.BP_CreateCloneCharacter
	 */
	struct UBP_SBPhotoModePlayerControlData_C_BP_CreateCloneCharacter_Params
	{
	public:
		class UObject*                                             InParent;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInCopyPose;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.BP_OnChangeWeaponVisibility
	 */
	struct UBP_SBPhotoModePlayerControlData_C_BP_OnChangeWeaponVisibility_Params
	{	};

	/**
	 * Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.ExecuteUbergraph_BP_SBPhotoModePlayerControlData
	 */
	struct UBP_SBPhotoModePlayerControlData_C_ExecuteUbergraph_BP_SBPhotoModePlayerControlData_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ICZQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
