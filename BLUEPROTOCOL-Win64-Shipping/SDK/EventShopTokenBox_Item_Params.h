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
	 * Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.CheckAmount
	 */
	struct UEventShopTokenBox_Item_C_CheckAmount_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.SubAmount
	 */
	struct UEventShopTokenBox_Item_C_SubAmount_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.SetIcon
	 */
	struct UEventShopTokenBox_Item_C_SetIcon_Params
	{
	public:
		int32_t                                                    TokenID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.SetAmount
	 */
	struct UEventShopTokenBox_Item_C_SetAmount_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QX5O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.OnLoaded_B6C13B804169678F239B7791E3D3E1F9
	 */
	struct UEventShopTokenBox_Item_C_OnLoaded_B6C13B804169678F239B7791E3D3E1F9_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.OnLoaded_53B3EE9042FEBAA5C204CDBAEC180C84
	 */
	struct UEventShopTokenBox_Item_C_OnLoaded_53B3EE9042FEBAA5C204CDBAEC180C84_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.LoadTexture
	 */
	struct UEventShopTokenBox_Item_C_LoadTexture_Params
	{
	public:
		int32_t                                                    TokenID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.ExecuteUbergraph_EventShopTokenBox_Item
	 */
	struct UEventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CY4L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
