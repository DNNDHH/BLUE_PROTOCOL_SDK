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
	 * Function CustomMenuPartWindowTop.CustomMenuPartWindowTop_C.SetInformationVisible
	 */
	struct UCustomMenuPartWindowTop_C_SetInformationVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomMenuPartWindowTop.CustomMenuPartWindowTop_C.SetInformationTextTable
	 */
	struct UCustomMenuPartWindowTop_C_SetInformationTextTable_Params
	{
	public:
		class USBTextTableAsset*                                   InTextTable;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomMenuPartWindowTop.CustomMenuPartWindowTop_C.SetInformationTextID
	 */
	struct UCustomMenuPartWindowTop_C_SetInformationTextID_Params
	{
	public:
		int32_t                                                    InTextId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomMenuPartWindowTop.CustomMenuPartWindowTop_C.SetTextVisible
	 */
	struct UCustomMenuPartWindowTop_C_SetTextVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomMenuPartWindowTop.CustomMenuPartWindowTop_C.SetTextTable
	 */
	struct UCustomMenuPartWindowTop_C_SetTextTable_Params
	{
	public:
		class USBTextTableAsset*                                   InTextTable;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomMenuPartWindowTop.CustomMenuPartWindowTop_C.SetTextId
	 */
	struct UCustomMenuPartWindowTop_C_SetTextId_Params
	{
	public:
		int32_t                                                    InTextId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomMenuPartWindowTop.CustomMenuPartWindowTop_C.SetSize
	 */
	struct UCustomMenuPartWindowTop_C_SetSize_Params
	{
	public:
		struct FVector2D                                           InSize;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomMenuPartWindowTop.CustomMenuPartWindowTop_C.PreConstruct
	 */
	struct UCustomMenuPartWindowTop_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomMenuPartWindowTop.CustomMenuPartWindowTop_C.ExecuteUbergraph_CustomMenuPartWindowTop
	 */
	struct UCustomMenuPartWindowTop_C_ExecuteUbergraph_CustomMenuPartWindowTop_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
