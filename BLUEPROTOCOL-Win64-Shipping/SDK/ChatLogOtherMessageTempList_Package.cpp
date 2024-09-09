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
	 * 		Name   -> Function ChatLogOtherMessageTempList.ChatLogOtherMessageTempList_C.ZeroPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        RetValue                                                   (Parm, OutParm)
	 */
	void UChatLogOtherMessageTempList_C::ZeroPadding(int32_t InValue, class FText* RetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogOtherMessageTempList.ChatLogOtherMessageTempList_C.ZeroPadding");
		
		UChatLogOtherMessageTempList_C_ZeroPadding_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetValue != nullptr)
			*RetValue = params.RetValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogOtherMessageTempList.ChatLogOtherMessageTempList_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBChatUIMessage                            InMessLog                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UChatLogOtherMessageTempList_C::Init(const struct FSBChatUIMessage& InMessLog)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogOtherMessageTempList.ChatLogOtherMessageTempList_C.Init");
		
		UChatLogOtherMessageTempList_C_Init_Params params {};
		params.InMessLog = InMessLog;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatLogOtherMessageTempList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatLogOtherMessageTempList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatLogOtherMessageTempList.ChatLogOtherMessageTempList_C");
		return ptr;
	}

}


