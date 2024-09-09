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
	 * Function ShortPin.ShortPin_C.Construct
	 */
	struct UShortPin_C_Construct_Params
	{	};

	/**
	 * Function ShortPin.ShortPin_C.UpdatePinInfo
	 */
	struct UShortPin_C_UpdatePinInfo_Params
	{
	public:
		bool                                                       IsNew;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShortPin.ShortPin_C.ExecuteUbergraph_ShortPin
	 */
	struct UShortPin_C_ExecuteUbergraph_ShortPin_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
