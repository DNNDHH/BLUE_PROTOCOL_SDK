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
	 * Function FlatShop_ProductItem_DescItemText.FlatShop_ProductItem_DescItemText_C.SetDescription
	 */
	struct UFlatShop_ProductItem_DescItemText_C_SetDescription_Params
	{
	public:
		class FText                                                Desc;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function FlatShop_ProductItem_DescItemText.FlatShop_ProductItem_DescItemText_C.SetProductInfo
	 */
	struct UFlatShop_ProductItem_DescItemText_C_SetProductInfo_Params
	{
	public:
		bool                                                       Product;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
