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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_ProjectilePath.BP_ProjectilePath_C
	 * Size -> 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
	 */
	class ABP_ProjectilePath_C : public ASBProjectilePath
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void RecalcSplinePath();
		void InitBuildSplineMesh();
		void ExecuteUbergraph_BP_ProjectilePath(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
