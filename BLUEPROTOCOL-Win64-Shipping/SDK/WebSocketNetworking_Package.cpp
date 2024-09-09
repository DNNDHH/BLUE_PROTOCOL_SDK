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
	 * 		Name   -> PredefinedFunction UWebSocketConnection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebSocketConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WebSocketNetworking.WebSocketConnection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWebSocketNetDriver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebSocketNetDriver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WebSocketNetworking.WebSocketNetDriver");
		return ptr;
	}

}


