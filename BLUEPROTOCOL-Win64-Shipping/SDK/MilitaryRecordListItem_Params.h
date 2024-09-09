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
	 * Function MilitaryRecordListItem.MilitaryRecordListItem_C.SetData
	 */
	struct UMilitaryRecordListItem_C_SetData_Params
	{
	public:
		struct FMilitaryRecordData                                 InMilitaryRecordData;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function MilitaryRecordListItem.MilitaryRecordListItem_C.SetBaseImage
	 */
	struct UMilitaryRecordListItem_C_SetBaseImage_Params
	{
	public:
		bool                                                       InIsBase;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MilitaryRecordListItem.MilitaryRecordListItem_C.ExecuteUbergraph_MilitaryRecordListItem
	 */
	struct UMilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
