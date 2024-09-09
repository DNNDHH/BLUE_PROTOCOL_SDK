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
	 * 		Name   -> PredefinedFunction USCTActorDebuggerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USCTActorDebuggerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SkillComboTreeRuntime.SCTActorDebuggerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USCTGraph.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USCTGraph::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SkillComboTreeRuntime.SCTGraph");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USCTGraphEdge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USCTGraphEdge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SkillComboTreeRuntime.SCTGraphEdge");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USCTGraphNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USCTGraphNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SkillComboTreeRuntime.SCTGraphNode");
		return ptr;
	}

}


