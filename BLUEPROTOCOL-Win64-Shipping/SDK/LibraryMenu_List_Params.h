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
	 * Function LibraryMenu_List.LibraryMenu_List_C.SetScrollOffset
	 */
	struct ULibraryMenu_List_C_SetScrollOffset_Params
	{
	public:
		float                                                      Offset;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_List.LibraryMenu_List_C.GetScrollOffset
	 */
	struct ULibraryMenu_List_C_GetScrollOffset_Params
	{
	public:
		float                                                      Offset;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_List.LibraryMenu_List_C.SetItemListSelected
	 */
	struct ULibraryMenu_List_C_SetItemListSelected_Params
	{
	public:
		int32_t                                                    listIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelected;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HKF6[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_List.LibraryMenu_List_C.Construct
	 */
	struct ULibraryMenu_List_C_Construct_Params
	{	};

	/**
	 * Function LibraryMenu_List.LibraryMenu_List_C.ExecuteUbergraph_LibraryMenu_List
	 */
	struct ULibraryMenu_List_C_ExecuteUbergraph_LibraryMenu_List_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_List.LibraryMenu_List_C.CategoryChanged__DelegateSignature
	 */
	struct ULibraryMenu_List_C_CategoryChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
