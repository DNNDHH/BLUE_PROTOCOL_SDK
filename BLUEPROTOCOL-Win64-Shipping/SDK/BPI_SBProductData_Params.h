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
	 * Function BPI_SBProductData.BPI_SBProductData_C.GetItemBoxDepthIndex
	 */
	struct UBPI_SBProductData_C_GetItemBoxDepthIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_SBProductData.BPI_SBProductData_C.IsItemBox
	 */
	struct UBPI_SBProductData_C_IsItemBox_Params
	{
	public:
		bool                                                       bReturnValue;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_SBProductData.BPI_SBProductData_C.GetIconItemData
	 */
	struct UBPI_SBProductData_C_GetIconItemData_Params
	{
	public:
		class UBP_SBProductItemData_C*                             ItemData;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_SBProductData.BPI_SBProductData_C.IsCostumeSet
	 */
	struct UBPI_SBProductData_C_IsCostumeSet_Params
	{
	public:
		bool                                                       bReturnValue;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_SBProductData.BPI_SBProductData_C.GetDetailType
	 */
	struct UBPI_SBProductData_C_GetDetailType_Params
	{
	public:
		E_SBProductDetailType                                      DetailType;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_SBProductData.BPI_SBProductData_C.SetSelectedData
	 */
	struct UBPI_SBProductData_C_SetSelectedData_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_SBProductData.BPI_SBProductData_C.GetSelectedData
	 */
	struct UBPI_SBProductData_C_GetSelectedData_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_SBProductData.BPI_SBProductData_C.GetItemDataList
	 */
	struct UBPI_SBProductData_C_GetItemDataList_Params
	{
	public:
		TArray<class UBP_SBProductItemData_C*>                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPI_SBProductData.BPI_SBProductData_C.GetScrollOffset
	 */
	struct UBPI_SBProductData_C_GetScrollOffset_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_SBProductData.BPI_SBProductData_C.SetScrollOffset
	 */
	struct UBPI_SBProductData_C_SetScrollOffset_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_SBProductData.BPI_SBProductData_C.GetParentData
	 */
	struct UBPI_SBProductData_C_GetParentData_Params
	{
	public:
		bool                                                       bIsValid;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LLPQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
