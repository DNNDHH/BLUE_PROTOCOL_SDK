/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementProgressIcon.LibraryMenu_AchievementProgressIcon_C.SetParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            GetCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_AchievementProgressIcon_C::SetParameter(int32_t GetCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementProgressIcon.LibraryMenu_AchievementProgressIcon_C.SetParameter");
		
		ULibraryMenu_AchievementProgressIcon_C_SetParameter_Params params {};
		params.GetCount = GetCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementProgressIcon.LibraryMenu_AchievementProgressIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_AchievementProgressIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementProgressIcon.LibraryMenu_AchievementProgressIcon_C.PreConstruct");
		
		ULibraryMenu_AchievementProgressIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementProgressIcon.LibraryMenu_AchievementProgressIcon_C.ExecuteUbergraph_LibraryMenu_AchievementProgressIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_AchievementProgressIcon_C::ExecuteUbergraph_LibraryMenu_AchievementProgressIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementProgressIcon.LibraryMenu_AchievementProgressIcon_C.ExecuteUbergraph_LibraryMenu_AchievementProgressIcon");
		
		ULibraryMenu_AchievementProgressIcon_C_ExecuteUbergraph_LibraryMenu_AchievementProgressIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULibraryMenu_AchievementProgressIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULibraryMenu_AchievementProgressIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LibraryMenu_AchievementProgressIcon.LibraryMenu_AchievementProgressIcon_C");
		return ptr;
	}

}


