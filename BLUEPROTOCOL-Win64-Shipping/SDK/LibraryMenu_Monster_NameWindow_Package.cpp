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
	 * 		Name   -> Function LibraryMenu_Monster_NameWindow.LibraryMenu_Monster_NameWindow_C.ChangeTypeVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_Monster_NameWindow_C::ChangeTypeVisibility(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_NameWindow.LibraryMenu_Monster_NameWindow_C.ChangeTypeVisibility");
		
		ULibraryMenu_Monster_NameWindow_C_ChangeTypeVisibility_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_NameWindow.LibraryMenu_Monster_NameWindow_C.ChangeTypeText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_NameWindow_C::ChangeTypeText(const class FString& Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_NameWindow.LibraryMenu_Monster_NameWindow_C.ChangeTypeText");
		
		ULibraryMenu_Monster_NameWindow_C_ChangeTypeText_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_NameWindow.LibraryMenu_Monster_NameWindow_C.SetEnemyData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               NamedType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               BossType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_Monster_NameWindow_C::SetEnemyData(const class FString& InName, const class FString& InType, bool NamedType, bool BossType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_NameWindow.LibraryMenu_Monster_NameWindow_C.SetEnemyData");
		
		ULibraryMenu_Monster_NameWindow_C_SetEnemyData_Params params {};
		params.InName = InName;
		params.InType = InType;
		params.NamedType = NamedType;
		params.BossType = BossType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULibraryMenu_Monster_NameWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULibraryMenu_Monster_NameWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LibraryMenu_Monster_NameWindow.LibraryMenu_Monster_NameWindow_C");
		return ptr;
	}

}


