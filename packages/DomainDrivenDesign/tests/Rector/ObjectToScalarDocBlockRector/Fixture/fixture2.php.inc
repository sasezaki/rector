<?php

namespace Rector\DomainDrivenDesign\Tests\Rector\ObjectToScalarDocBlockRector\Fixture;

use Rector\DomainDrivenDesign\Tests\Rector\ObjectToScalarDocBlockRector\Source\SomeValueObject;

class FourthActionClass
{
    public function someFunction(?SomeValueObject $name): ?SomeValueObject
    {
        /** @var SomeValueObject|null $someValueObject */
        $someValueObject = new SomeValueObject('value');
    }
}

?>
-----
<?php

namespace Rector\DomainDrivenDesign\Tests\Rector\ObjectToScalarDocBlockRector\Fixture;

use Rector\DomainDrivenDesign\Tests\Rector\ObjectToScalarDocBlockRector\Source\SomeValueObject;

class FourthActionClass
{
    public function someFunction(?SomeValueObject $name): ?SomeValueObject
    {
        /** @var string|null $someValueObject */
        $someValueObject = new SomeValueObject('value');
    }
}

?>
