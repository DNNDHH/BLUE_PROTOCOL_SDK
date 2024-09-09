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
	 * Function DungeonTraverse.DungeonTraverse_C.SetVisibleDebugText
	 */
	struct UDungeonTraverse_C_SetVisibleDebugText_Params
	{	};

	/**
	 * Function DungeonTraverse.DungeonTraverse_C.GetName
	 */
	struct UDungeonTraverse_C_GetName_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DungeonTraverse.DungeonTraverse_C.SetName
	 */
	struct UDungeonTraverse_C_SetName_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DungeonTraverse.DungeonTraverse_C.Setup
	 */
	struct UDungeonTraverse_C_Setup_Params
	{
	public:
		struct FAnchors                                            InAnchors;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FVector2D                                           InPosition;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           InSize;                                                  // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DungeonTraverse.DungeonTraverse_C.Construct
	 */
	struct UDungeonTraverse_C_Construct_Params
	{	};

	/**
	 * Function DungeonTraverse.DungeonTraverse_C.ExecuteUbergraph_DungeonTraverse
	 */
	struct UDungeonTraverse_C_ExecuteUbergraph_DungeonTraverse_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
