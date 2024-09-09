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
	 * Function LibraryMenu_BookmarkDetails.LibraryMenu_BookmarkDetails_C.SetDetailsVisibility
	 */
	struct ULibraryMenu_BookmarkDetails_C_SetDetailsVisibility_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_BookmarkDetails.LibraryMenu_BookmarkDetails_C.Construct
	 */
	struct ULibraryMenu_BookmarkDetails_C_Construct_Params
	{	};

	/**
	 * Function LibraryMenu_BookmarkDetails.LibraryMenu_BookmarkDetails_C.Tick
	 */
	struct ULibraryMenu_BookmarkDetails_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_BookmarkDetails.LibraryMenu_BookmarkDetails_C.ExecuteUbergraph_LibraryMenu_BookmarkDetails
	 */
	struct ULibraryMenu_BookmarkDetails_C_ExecuteUbergraph_LibraryMenu_BookmarkDetails_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
