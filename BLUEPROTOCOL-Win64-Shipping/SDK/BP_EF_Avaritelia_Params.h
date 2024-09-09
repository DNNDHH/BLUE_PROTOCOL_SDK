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
	 * Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.StopSound
	 */
	struct UBP_EF_Avaritelia_C_StopSound_Params
	{	};

	/**
	 * Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.PlaySound
	 */
	struct UBP_EF_Avaritelia_C_PlaySound_Params
	{	};

	/**
	 * Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.CheckOwnerHidden
	 */
	struct UBP_EF_Avaritelia_C_CheckOwnerHidden_Params
	{	};

	/**
	 * Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.DestroyAvariteliaEffect
	 */
	struct UBP_EF_Avaritelia_C_DestroyAvariteliaEffect_Params
	{	};

	/**
	 * Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.DeactivateAvariteliaEffect
	 */
	struct UBP_EF_Avaritelia_C_DeactivateAvariteliaEffect_Params
	{	};

	/**
	 * Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.ActivateAvariteliaEffect
	 */
	struct UBP_EF_Avaritelia_C_ActivateAvariteliaEffect_Params
	{	};

	/**
	 * Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.SetAvaritiaEffectTransform
	 */
	struct UBP_EF_Avaritelia_C_SetAvaritiaEffectTransform_Params
	{	};

	/**
	 * Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.SpawnAravitiaEffect
	 */
	struct UBP_EF_Avaritelia_C_SpawnAravitiaEffect_Params
	{	};

	/**
	 * Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.SetCoAvaritiaParam
	 */
	struct UBP_EF_Avaritelia_C_SetCoAvaritiaParam_Params
	{	};

	/**
	 * Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.CreateCoAvaritiaMID
	 */
	struct UBP_EF_Avaritelia_C_CreateCoAvaritiaMID_Params
	{	};

	/**
	 * Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.ReceiveBeginPlay
	 */
	struct UBP_EF_Avaritelia_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.ReceiveTick
	 */
	struct UBP_EF_Avaritelia_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.PartsLoaded
	 */
	struct UBP_EF_Avaritelia_C_PartsLoaded_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.ReceiveEndPlay
	 */
	struct UBP_EF_Avaritelia_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.ExecuteUbergraph_BP_EF_Avaritelia
	 */
	struct UBP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
