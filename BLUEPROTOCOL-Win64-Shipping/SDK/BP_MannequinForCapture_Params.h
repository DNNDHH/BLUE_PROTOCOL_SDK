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
	 * Function BP_MannequinForCapture.BP_MannequinForCapture_C.UpdateAnimChange
	 */
	struct ABP_MannequinForCapture_C_UpdateAnimChange_Params
	{
	public:
		int32_t                                                    InCostumeItemId;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutAnimChange;                                           // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1P7W[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MannequinForCapture.BP_MannequinForCapture_C.ResetMannequin
	 */
	struct ABP_MannequinForCapture_C_ResetMannequin_Params
	{	};

	/**
	 * Function BP_MannequinForCapture.BP_MannequinForCapture_C.UpdateMannequin
	 */
	struct ABP_MannequinForCapture_C_UpdateMannequin_Params
	{	};

	/**
	 * Function BP_MannequinForCapture.BP_MannequinForCapture_C.ReceiveBeginPlay
	 */
	struct ABP_MannequinForCapture_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_MannequinForCapture.BP_MannequinForCapture_C.SetCostumeToMannequin
	 */
	struct ABP_MannequinForCapture_C_SetCostumeToMannequin_Params
	{
	public:
		int32_t                                                    InCostumeItemId;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsOwnItem;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HRG2[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InOwnCostumeColorIndex;                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InOwnCostumeColorS;                                      // 0x000C(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InOwnCostumeColorV;                                      // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InOwnCostumeMaterialId;                                  // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MannequinForCapture.BP_MannequinForCapture_C.SetMannequinType
	 */
	struct ABP_MannequinForCapture_C_SetMannequinType_Params
	{
	public:
		bool                                                       IsMale;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MannequinForCapture.BP_MannequinForCapture_C.ExecuteUbergraph_BP_MannequinForCapture
	 */
	struct ABP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
