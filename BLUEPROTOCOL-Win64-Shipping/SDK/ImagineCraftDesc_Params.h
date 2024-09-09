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
	 * Function ImagineCraftDesc.ImagineCraftDesc_C.UpdateSkills
	 */
	struct UImagineCraftDesc_C_UpdateSkills_Params
	{	};

	/**
	 * Function ImagineCraftDesc.ImagineCraftDesc_C.IsStorage
	 */
	struct UImagineCraftDesc_C_IsStorage_Params
	{
	public:
		bool                                                       CurrentIsStorage;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ImagineCraftDesc.ImagineCraftDesc_C.GetStorage
	 */
	struct UImagineCraftDesc_C_GetStorage_Params
	{
	public:
		int32_t                                                    StorageNo;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineCraftDesc.ImagineCraftDesc_C.PerkListGenerate
	 */
	struct UImagineCraftDesc_C_PerkListGenerate_Params
	{
	public:
		struct FSBMasterImagine                                    InImagineMaster;                                         // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ImagineCraftDesc.ImagineCraftDesc_C.CalclateMoney
	 */
	struct UImagineCraftDesc_C_CalclateMoney_Params
	{
	public:
		int32_t                                                    Money;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isLiquidMemomryActive;                                   // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsDiscount;                                              // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I4U1[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ImagineCraftDesc.ImagineCraftDesc_C.GenerateMaterialData
	 */
	struct UImagineCraftDesc_C_GenerateMaterialData_Params
	{	};

	/**
	 * Function ImagineCraftDesc.ImagineCraftDesc_C.SetRecepiData
	 */
	struct UImagineCraftDesc_C_SetRecepiData_Params
	{
	public:
		struct FMasterImagineRecepi                                RecepiData;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ImagineCraftDesc.ImagineCraftDesc_C.ExecuteUbergraph_ImagineCraftDesc
	 */
	struct UImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MTQB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
