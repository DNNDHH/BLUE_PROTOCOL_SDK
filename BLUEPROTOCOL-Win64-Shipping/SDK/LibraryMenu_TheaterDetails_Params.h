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
	 * Function LibraryMenu_TheaterDetails.LibraryMenu_TheaterDetails_C.SetMessage
	 */
	struct ULibraryMenu_TheaterDetails_C_SetMessage_Params
	{
	public:
		bool                                                       IsCty;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_52MS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_TheaterDetails.LibraryMenu_TheaterDetails_C.SetDetailsVisibility
	 */
	struct ULibraryMenu_TheaterDetails_C_SetDetailsVisibility_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_TheaterDetails.LibraryMenu_TheaterDetails_C.Construct
	 */
	struct ULibraryMenu_TheaterDetails_C_Construct_Params
	{	};

	/**
	 * Function LibraryMenu_TheaterDetails.LibraryMenu_TheaterDetails_C.ExecuteUbergraph_LibraryMenu_TheaterDetails
	 */
	struct ULibraryMenu_TheaterDetails_C_ExecuteUbergraph_LibraryMenu_TheaterDetails_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_TheaterDetails.LibraryMenu_TheaterDetails_C.CategoryChanged__DelegateSignature
	 */
	struct ULibraryMenu_TheaterDetails_C_CategoryChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
