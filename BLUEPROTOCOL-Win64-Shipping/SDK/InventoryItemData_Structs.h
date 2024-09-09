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
	 * UserDefinedStruct InventoryItemData.InventoryItemData
	 * Size -> 0x005D
	 */
	struct FInventoryItemData
	{
	public:
		class FString                                              UniqueId_45_7574BCF94D5ADE86CDBBF0BB3120996A;            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    Index_46_91E0E93D4606ACC8947E678E4D117154;               // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EItemType                                                  ItemType_54_7E466491478A3BFD84668EB0ADC5D32E;            // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YFN9[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name_19_21BA5B5B48FF00666A0EAE8CFC6A1408;                // 0x0018(0x0018) Edit, BlueprintVisible
		class FText                                                UnIdentifiedName_69_98CDE22B47E90984A0F520BFE2AB3B10;    // 0x0030(0x0018) Edit, BlueprintVisible
		int32_t                                                    Amount_27_A52406EA47DD10B12153A9B4910EB562;              // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AmountBonus_72_CC8FD2C24D500458399691BA0CC7C393;         // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StorageNumber_61_3A2F5E984BF1494BE5457B9307681DCC;       // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanUse_56_D8CF042346DA73D559782393F6B26CC3;              // 0x0054(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DM3B[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ItemPositionIndex_64_C79DF86B4E5BD82D874FDC8075213A54;   // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsIdentified_66_22994BF440D03A77795283A7A3F0DC56;       // 0x005C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
