

using UnrealBuildTool;
using System.Collections.Generic;

public class AdvancedLocomotionSystemVTarget : TargetRules
{
	public AdvancedLocomotionSystemVTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "AdvancedLocomotionSystemV" } );
	}
}
