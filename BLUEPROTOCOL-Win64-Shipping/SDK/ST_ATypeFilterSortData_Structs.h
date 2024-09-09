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
	 * UserDefinedStruct ST_ATypeFilterSortData.ST_ATypeFilterSortData
	 * Size -> 0x0018
	 */
	struct FST_ATypeFilterSortData
	{
	public:
		EItemFilterType                                            Filter_2_607684FB453D798769153C8E9A707CB7;               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EFilter_Type                                               FilterBtn_9_21FEC1C640A5014AF0A631B13FA8549E;            // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FY9Z[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ESBItemSortType>                                    SortList_6_A81A991C452E3BEE9368ADAF9E1DC60E;             // 0x0008(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
