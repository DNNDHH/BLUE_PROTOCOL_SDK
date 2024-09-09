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
	 * UserDefinedStruct ItemListData.ItemListData
	 * Size -> 0x0089
	 */
	struct FItemListData
	{
	public:
		struct FCraftMasterData                                    MasterData_2_6162CC2146B6107B8D5D80A57025E66A;           // 0x0000(0x0088) Edit, BlueprintVisible
		bool                                                       isWeapon_5_933CC79D4F41AF9B5101DAAA1FD7A0B7;             // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
