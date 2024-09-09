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
	 * Function MilitaryRecordList.MilitaryRecordList_C.SetData
	 */
	struct UMilitaryRecordList_C_SetData_Params
	{
	public:
		TArray<struct FMilitaryRecordData>                         InMilitaryRecordData;                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       InIsMilitalyRecordOpen;                                  // 0x0010(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilitaryRecordList.MilitaryRecordList_C.ExecuteUbergraph_MilitaryRecordList
	 */
	struct UMilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
